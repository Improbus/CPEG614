// Copyright (c) 2004-2014, Cray Inc.  (See LICENSE file for more details)


pragma "no use ChapelStandard"

module startInitCommDiags {
  config param printInitVerboseComm = false;
  config param printInitCommCounts = false;

  if printInitVerboseComm {
    use CommDiagnostics;
    startVerboseComm();
  }

  if printInitCommCounts {
    use CommDiagnostics;
    startCommDiagnostics();
  }
}

