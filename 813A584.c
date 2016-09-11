int __fastcall sub_813A584(unsigned __int8 a1)
{
  int v1; // r5@1
  unsigned int v2; // r7@1
  _BYTE *v3; // r4@1
  int v4; // r3@1
  int v5; // r6@1
  signed int v6; // r0@3
  int v7; // r0@10
  int v9; // [sp+18h] [bp-4h]@0

  v1 = a1;
  v2 = 40 * a1;
  v3 = &byte_3004B28[v2];
  v4 = (byte_3004B28[v2 + 2] + byte_3004B28[v2]) & 0xFF;
  v5 = (byte_3004B28[v2 + 2] + byte_3004B28[v2]) & 0xFF;
  if ( word_30017A0 & 0x40 )
  {
    if ( *((_WORD *)v3 + 3) == *(_WORD *)(4 * v4 + 0x2025BCE) )
      LOWORD(v6) = 1;
    else
      LOWORD(v6) = *((_WORD *)v3 + 3) + 1;
    goto _0813A64A;
  }
  if ( word_30017A0 & 0x80 )
  {
    if ( *((_WORD *)v3 + 3) == 1 )
      LOWORD(v6) = *(_WORD *)(4 * v4 + 0x2025BCE);
    else
      LOWORD(v6) = *((_WORD *)v3 + 3) - 1;
    goto _0813A64A;
  }
  if ( word_30017A0 & 0x20 )
  {
    v7 = *((_WORD *)v3 + 3) - 10;
    *((_WORD *)v3 + 3) = v7;
    if ( v7 << 16 <= 0 )
    {
      LOWORD(v6) = 1;
_0813A64A:
      *((_WORD *)v3 + 3) = v6;
    }
_0813A64C:
    sub_80A418C(*((_WORD *)v3 + 3), 1, 8, 9u, 3u);
    return v9;
  }
  if ( word_30017A0 & 0x10 )
  {
    *((_WORD *)v3 + 3) += 10;
    v6 = *(_WORD *)(4 * v5 + 0x2025BCE);
    if ( *((_WORD *)v3 + 3) > v6 )
      goto _0813A64A;
    goto _0813A64C;
  }
  if ( word_300179E & 1 )
  {
    audio_play(5u);
    MenuZeroFillWindowRect(6u, 6u, 0xDu, 0xBu);
    if ( *((_WORD *)v3 + 6) )
      sub_813A794(v1);
    else
      sub_813A6FC(v1);
  }
  else if ( word_300179E & 2 )
  {
    audio_play(5u);
    MenuZeroFillWindowRect(6u, 6u, 0xDu, 0xBu);
    sub_80F98DC(0);
    sub_80F98DC(1u);
    sub_813AD58(*(_WORD *)(4 * (*((_WORD *)v3 + 1) + *(_WORD *)v3) + 0x2025BCC));
    dword_3004B20[v2 / 4] = (int)sub_813A280;
  }
  return v9;
}
