FROM maven:3.8.4-jdk-11-slim AS builder
WORKDIR /pw
COPY . .
RUN mvn dependency:resolve
RUN mvn package

FROM openjdk:11-jre-slim
WORKDIR /pw
COPY --from=builder /pw/target/worker-jar-with-dependencies.jar /
CMD ["java", "-jar", "worker-jar-with-dependencies.jar"]