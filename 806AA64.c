int __fastcall sub_806AA64(unsigned __int8 a1)
{
  unsigned __int8 v1; // r5@1
  unsigned int v2; // r6@1
  _BYTE *v3; // r4@1
  unsigned __int8 v4; // r1@1
  unsigned __int8 v5; // r2@1
  unsigned __int8 v6; // r3@1
  int v8; // [sp+10h] [bp-4h]@0

  v1 = a1;
  v2 = 40 * a1;
  v3 = &byte_3004B28[v2];
  *(_WORD *)v3 = 0;
  *((_WORD *)v3 + 3) = word_3004038;
  v4 = byte_300403A;
  *((_WORD *)v3 + 4) = byte_300403A;
  v5 = byte_300403B;
  *((_WORD *)v3 + 5) = byte_300403B;
  v6 = dword_300403C;
  *((_WORD *)v3 + 6) = (char)dword_300403C;
  sub_806A850(*(_WORD *)&byte_3004B28[v2 + 6], v4, v5, v6);
  sub_806A69C(v1);
  *((_WORD *)v3 + 2) = 2;
  dword_3004B20[v2 / 4] = (int)sub_806A958;
  return v8;
}
