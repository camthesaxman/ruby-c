int __fastcall sub_8117E98(int a1)
{
  int v1; // r6@1
  int v2; // r4@1
  signed int v3; // r1@1
  __int16 v4; // r5@3
  signed __int16 v5; // r0@3
  unsigned int v6; // r5@3
  __int16 *v7; // r1@3
  int v9; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  v2 = (*(_WORD *)(a1 + 46) + v2019024) & 0xFFFF;
  v3 = (signed __int16)(*(_WORD *)(a1 + 46) + v2019024);
  if ( v3 > 359 )
    v2 = (v3 - 360) & 0xFFFF;
  v4 = sine2(v2);
  v5 = cosine2(v2);
  *(_WORD *)(v1 + 36) = *(_WORD *)(v1 + 48) * v4 >> 12;
  *(_WORD *)(v1 + 38) = *(_WORD *)(v1 + 48) * -v5 >> 12;
  v6 = (unsigned int)((v4 + (v4 < 0 ? 0xF : 0)) << 12) >> 16;
  v7 = &gOamMatrices[4 * ((unsigned int)*(_BYTE *)(v1 + 3) << 26 >> 27)];
  v5 /= 16;
  v7[3] = v5;
  *v7 = v5;
  v7[1] = v6;
  v7[2] = -(signed __int16)v6;
  return v9;
}
