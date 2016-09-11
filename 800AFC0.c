int __fastcall sub_800AFC0(unsigned __int8 a1)
{
  int *v1; // r4@2
  int v3; // [sp+8h] [bp-4h]@0

  if ( !(v202F38F & 0x80) )
  {
    v1 = &dword_3004B20[10 * a1];
    dword_2020020[17 * *((_BYTE *)v1 + 12)] = (int)nullsub_34;
    v4000000 = 4160;
    BeginNormalPaletteFade(-65536, 0, 0, 16);
    *v1 = (int)sub_800B034;
  }
  return v3;
}
