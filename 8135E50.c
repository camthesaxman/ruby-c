int sub_8135E50()
{
  int v0; // r7@1
  int v1; // r2@3
  signed int v2; // r5@4
  unsigned int *v3; // r4@5
  int v5; // [sp+14h] [bp-4h]@0

  v0 = 68;
  if ( v20253F8 & 1 )
    v0 = 69;
  v202E8DC = 0;
  if ( (unsigned __int16)sub_8135D3C(v20253F8 & 1) > 0x37u )
  {
    v2 = 0;
    do
    {
      v3 = &dword_3004360[25 * (*(_BYTE *)(v2 + 33707017) - 1)];
      if ( !GetMonData((int)v3, v0, v1) )
      {
        v202E8DC = 1;
        SetMonData((int)v3, v0, 33745116);
      }
      ++v2;
    }
    while ( v2 <= 2 );
  }
  if ( v202E8DC )
    sav12_xor_increment(0x2Au);
  return v5;
}
