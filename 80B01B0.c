int unref_sub_80B01B0()
{
  signed int v0; // r2@1
  int v2; // [sp+8h] [bp-4h]@0

  v0 = 0;
  do
    dword_2020020[17 * *(_BYTE *)(v0++ + 33657357)] = (int)ObjectCB_SwitchPocketRotatingBallInit;
  while ( v0 <= 3 );
  return v2;
}
