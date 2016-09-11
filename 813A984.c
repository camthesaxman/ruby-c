int __fastcall sub_813A984(unsigned __int8 a1)
{
  unsigned int v1; // r4@1
  int v3; // [sp+Ch] [bp-4h]@0

  v1 = 40 * a1;
  if ( word_300179E & 1 || word_300179E == 2 )
  {
    sub_813AD58(*(_WORD *)(4 * (*(_WORD *)&byte_3004B28[v1 + 2] + *(_WORD *)&byte_3004B28[v1]) + 0x2025BCC));
    sub_80F98DC(0);
    sub_80F98DC(1u);
    dword_3004B20[v1 / 4] = (int)sub_813A280;
  }
  return v3;
}
