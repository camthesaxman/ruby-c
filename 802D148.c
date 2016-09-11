int sub_802D148()
{
  int v1; // [sp+0h] [bp-4h]@0

  if ( !gReceivedRemoteLinkPlayers )
  {
    m4aSongNumStop(90);
    byte_3001BAD &= 0xFDu;
    gMain[0] = dword_30042D0;
    SetMainCallback2((int)c2_8011A1C);
  }
  return v1;
}
