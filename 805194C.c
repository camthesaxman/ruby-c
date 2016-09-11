int __fastcall sub_805194C(unsigned __int16 a1, unsigned __int16 a2)
{
  int v2; // r3@1
  _WORD *v3; // r1@1
  unsigned int v4; // r2@1
  int v6; // [sp+0h] [bp-4h]@0

  v2 = a2;
  v3 = (_WORD *)(dword_3004854 + 320);
  v4 = *(_WORD *)(dword_3004854 + 320);
  if ( v4 < a1 )
  {
    *v3 = v4 + 2;
    sub_805197C(*v3, v2);
  }
  return v6;
}
