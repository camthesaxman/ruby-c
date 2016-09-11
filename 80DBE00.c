int __fastcall sub_80DBE00(unsigned __int8 a1)
{
  int *v1; // r5@1
  unsigned int v2; // r6@1
  unsigned __int16 v3; // r1@1
  int v5; // [sp+10h] [bp-4h]@0

  v1 = &dword_3004B20[10 * a1];
  *((_WORD *)v1 + 7) = 16;
  *((_WORD *)v1 + 8) = 0;
  *((_WORD *)v1 + 17) = (unsigned __int8)sub_8077ABC(v202F7C8, 2u);
  *((_WORD *)v1 + 18) = (unsigned __int8)sub_8077ABC(v202F7C8, 3u);
  v2 = (signed __int16)sub_807A100(v202F7C8, 1u) / 3;
  v3 = (signed __int16)sub_807A100(v202F7C8, 0) / 3;
  if ( v3 < v2 )
    v3 = v2;
  *((_WORD *)v1 + 16) = v3;
  v4000050 = 16192;
  v4000052 = 16;
  *v1 = (int)sub_80DBE98;
  return v5;
}
