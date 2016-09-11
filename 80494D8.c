int sub_80494D8()
{
  int v0; // r4@1
  int v1; // r1@1
  int v3; // [sp+4h] [bp-4h]@0

  v0 = (unsigned __int8)GetMultiplayerId();
  v1 = (unsigned __int8)GetBlockRecievedStatus();
  if ( v1 )
  {
    if ( v0 )
      sub_80491E4(v0, v1);
    else
      sub_80490BC(0, v1);
    ResetBlockReceivedFlags();
  }
  if ( !v0 )
    sub_80492D8();
  return v3;
}
