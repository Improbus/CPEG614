// Copyright (c) 2004-2014, Cray Inc.  (See LICENSE file for more details)


pragma "no use ChapelStandard"

module stopInitCommDiags {
  use startInitCommDiags;

  if printInitVerboseComm {
    use CommDiagnostics;
    stopVerboseComm();
  }

  if printInitCommCounts {
    use CommDiagnostics;
    stopCommDiagnostics();
    writeln(getCommDiagnostics());
    resetCommDiagnostics();
  }
}
