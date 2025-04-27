FROM python:3.9.22-alpine3.21
RUN adduser -D appuser && \
    mkdir /opt/prometheus-metrics && \
    chown -R appuser:appuser /opt/prometheus-metrics && \
    pip install prometheus-client
USER appuser 
WORKDIR /opt/prometheus-metrics
COPY --chown=appuser server.py .
EXPOSE 8080
CMD ["python", "server.py"]