int __fastcall unref_sub_80AF280(unsigned __int8 a1)
{
  int v1; // r5@1
  unsigned int v2; // r4@1
  int v4; // [sp+8h] [bp-4h]@0

  v1 = a1;
  v2 = 0;
  do
  {
    sub_80AF1E4(v2, v1);
    v2 = (v2 + 1) & 0xFF;
  }
  while ( v2 <= 3 );
  return v4;
}
