int c4_overworld()
{
  int v1; // [sp+Ch] [bp-4h]@0

  if ( !(v20239F8 & 2) )
  {
    sub_8040048(&unk_3004360);
    atkE5_pickupitemcalculation(&unk_3004360);
  }
  if ( !(v20239F8 & 2) || !gReceivedRemoteLinkPlayers )
  {
    v202E8DC = v2024D26;
    byte_3001BAD &= 0xFDu;
    gMain[0] = dword_30042D0;
    if ( v20239F8 & 0x400 )
    {
      sub_8134504(&unk_30045C0);
      if ( v2024D26 == 1 || v2024D26 == 7 )
        sub_813452C();
    }
    m4aSongNumStop(90);
    SetMainCallback2(dword_3001778);
  }
  return v1;
}
