int __fastcall sub_80DF78C(int a1)
{
  int v1; // r6@1
  int v2; // r0@1
  unsigned int v3; // r7@1
  unsigned int v4; // r5@1
  int v5; // r0@1
  unsigned int v6; // r0@2
  int v8; // [sp+10h] [bp-4h]@0

  v1 = a1;
  *(_WORD *)(a1 + 32) = (unsigned __int8)sub_8077ABC(v202F7C8, 2u);
  *(_WORD *)(v1 + 34) = (unsigned __int8)sub_8077ABC(v202F7C8, 3u);
  *(_WORD *)(v1 + 54) = 0;
  *(_WORD *)(v1 + 56) = 1;
  *(_WORD *)(v1 + 58) = word_3004B00[0];
  v2 = sub_807A100(v2024C07, 0);
  v3 = v2 << 16;
  v4 = (unsigned __int16)v2;
  v5 = sub_807A100(v2024C07, 1u);
  if ( v4 <= (unsigned __int16)v5 )
    v6 = (unsigned int)(v5 << 16) >> 17;
  else
    v6 = v3 >> 17;
  *(_WORD *)(v1 + 60) = v6;
  *(_WORD *)(v1 + 36) = cosine(*(_WORD *)(v1 + 58), *(_WORD *)(v1 + 60));
  *(_WORD *)(v1 + 38) = sine(*(_WORD *)(v1 + 58), *(_WORD *)(v1 + 60));
  *(_DWORD *)(v1 + 28) = sub_80DF81C;
  return v8;
}
