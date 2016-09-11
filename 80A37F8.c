int __fastcall sub_80A37F8(unsigned __int8 a1)
{
  int v1; // r7@1
  unsigned int v2; // r5@1
  unsigned __int8 v3; // r0@8
  int v4; // r0@8
  int v6; // [sp+10h] [bp-4h]@0

  v1 = a1;
  v2 = v203855A;
  if ( v203855A > 0xFu )
  {
    if ( gLinkOpen == 1 )
    {
      sub_80A49AC(
        *(_WORD *)(4 * ((unsigned __int8)byte_3005D10[4 * v2038559 + 1] + (unsigned __int8)byte_3005D10[4 * v2038559])
                 + dword_3005D24),
        v2038562);
      ++v2038562;
    }
    else
    {
      for ( ; v2038562 <= 2u; ++v2038562 )
        sub_80A49AC(
          *(_WORD *)(4 * ((unsigned __int8)byte_3005D10[4 * v2038559 + 1] + (unsigned __int8)byte_3005D10[4 * v2038559])
                   + dword_3005D24),
          v2038562);
    }
    if ( v2038562 == 3 )
    {
      v203855A = 16;
      v203855B = v2038559 + 1;
      v3 = FindTaskIdByFunc((int)sub_80A4F68);
      sub_80A37C0(v3);
      v4 = DestroyTask(v1);
      sub_80A736C(v4);
      sub_80F979C(2, 0);
      sub_80F979C(3, 0);
    }
  }
  else
  {
    ++v203855A;
    sub_80A396C(gBG2TilemapBuffer, v2, v203855A, 79);
    sub_80A39E4(
      gBG2TilemapBuffer,
      (v2038559 + 1) & 0xFF,
      (unsigned int)v203855A >> 1,
      BYTE2(dword_3004B20[10 * v1 + 4]));
    v2038558 = 1;
    sub_80A48E8(v1, v2 >> 1, ((unsigned int)v203855A >> 1) - 1);
    v2038558 = 0;
  }
  return v6;
}
