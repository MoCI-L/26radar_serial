#!/usr/bin/env bash
set -euo pipefail

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
WORKSPACE_ROOT="$(cd "${SCRIPT_DIR}/../../.." && pwd)"
PARAM_FILE="${1:-${WORKSPACE_ROOT}/src/radar_comm/config/serial_node.yaml}"

if [[ ! -f "${WORKSPACE_ROOT}/install/setup.bash" ]]; then
  echo "[radar_serial] install/setup.bash not found. Build the workspace first:" >&2
  echo "  colcon build --packages-select radar_interfaces radar_comm" >&2
  exit 1
fi

if [[ ! -f "${PARAM_FILE}" ]]; then
  echo "[radar_serial] param file not found: ${PARAM_FILE}" >&2
  exit 1
fi

source "${WORKSPACE_ROOT}/install/setup.bash"

echo "[radar_serial] using params: ${PARAM_FILE}"
exec ros2 run radar_comm serial_node --ros-args --params-file "${PARAM_FILE}"
