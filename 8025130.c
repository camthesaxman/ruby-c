int atk77_setprotect()
{
  signed int v0; // r6@1
  int v1; // r0@1
  char *v2; // r4@7
  int v4; // [sp+14h] [bp-4h]@0

  v0 = 1;
  v1 = *(_WORD *)(2 * v2024C07 + 0x2024C4C);
  if ( v1 != 182 && v1 != 197 && v1 != 203 )
    *(_BYTE *)(28 * v2024C07 + 0x2024CB0) = 0;
  if ( v2024A7E == v2024A68 - 1 )
    v0 = 0;
  v2 = (char *)&gProtectSuccessRates + 2 * *(_BYTE *)(28 * v2024C07 + 0x2024CB0);
  if ( *(_WORD *)v2 > (unsigned int)(unsigned __int16)Random(28 * v2024C07 + 33705128) && v0 )
  {
    if ( gBattleMoves[12 * v2024BE6] == 111 )
    {
      *(_BYTE *)(16 * v2024C07 + 0x2024D28) |= 1u;
      v2024D23 = 0;
    }
    if ( gBattleMoves[12 * v2024BE6] == 116 )
    {
      *(_BYTE *)(16 * v2024C07 + 0x2024D28) |= 2u;
      v2024D23 = 1;
    }
    ++*(_BYTE *)(28 * v2024C07 + 0x2024CB0);
  }
  else
  {
    *(_BYTE *)(28 * v2024C07 + 0x2024CB0) = 0;
    v2024D23 = 2;
    v2024C68 |= 1u;
  }
  ++v2024C10;
  return v4;
}
