int __fastcall GetSpeciesName(_BYTE *a1, unsigned __int16 a2)
{
  _BYTE *v2; // r6@1
  unsigned int v3; // r5@1
  signed int v4; // r1@1
  char *v5; // r3@1
  char *v6; // r2@1
  _BYTE *v7; // r4@3
  char v8; // r0@5
  int v10; // [sp+10h] [bp-4h]@0

  v2 = a1;
  v3 = a2;
  v4 = 0;
  v5 = &gSpeciesNames[11 * v3];
  v6 = a1;
  while ( 1 )
  {
    v7 = &v2[v4];
    if ( v4 > 10 )
      break;
    v8 = v3 <= 0x19C ? *v5 : gSpeciesNames[v4];
    *v6 = v8;
    if ( *v7 == 255 )
      break;
    ++v5;
    ++v6;
    ++v4;
  }
  *v7 = -1;
  return v10;
}
