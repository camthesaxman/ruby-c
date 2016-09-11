int __fastcall sub_813ABAC(_WORD *a1, int a2, int a3)
{
  _WORD *v3; // r4@1
  int v4; // r6@1
  unsigned int v5; // r1@1
  unsigned int v6; // r5@1
  int v8; // [sp+10h] [bp-4h]@0

  v3 = a1;
  v4 = a3;
  v5 = a2 << 24;
  v6 = v5 >> 24;
  sub_813AB28(a1, BYTE3(v5), a3);
  if ( (unsigned int)*v3 > 0x152 )
    sub_813AB10(v6);
  else
    sub_813AAC4(v3[1], 1, v6, 3u, v4);
  return v8;
}
