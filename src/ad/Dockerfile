#FROM eclipse-temurin:21-jdk AS builder

#WORKDIR /usr/src/app/

#COPY gradlew* settings.gradle* build.gradle .
#COPY ./gradle ./gradle

#RUN chmod +x ./gradlew
#RUN ./gradlew
#RUN ./gradlew downloadRepos

#COPY . .
#COPY ./pb ./proto
#RUN chmod +x ./gradlew
#RUN ./gradlew installDist -PprotoSourceDir=./proto

#####################################################

#FROM eclipse-temurin:21-jre

#WORKDIR /usr/src/app/

#COPY --from=builder /usr/src/app/ ./

#ENV AD_PORT 9099

#ENTRYPOINT ["./build/install/opentelemetry-demo-ad/bin/Ad"]

FROM eclipse-temurin:21-jdk AS builder

WORKDIR /usr/src/app/

# Copy Gradle wrapper and build files explicitly
COPY gradlew gradlew
COPY build.gradle build.gradle
COPY settings.gradle settings.gradle
COPY gradle gradle
COPY src src
COPY pb proto

# Ensure gradlew is executable
RUN chmod +x gradlew

# Debug: confirm gradlew is in the image
RUN echo "== Listing files ==" && ls -la && echo "===================="

# Build the project
RUN ./gradlew
RUN ./gradlew downloadRepos
RUN ./gradlew installDist -PprotoSourceDir=./proto

#####################################################

FROM eclipse-temurin:21-jre

WORKDIR /usr/src/app/

COPY --from=builder /usr/src/app/ ./

ENV AD_PORT 9099

ENTRYPOINT ["./build/install/opentelemetry-demo-ad/bin/Ad"]

