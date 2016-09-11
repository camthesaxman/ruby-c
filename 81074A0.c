int __fastcall unref_sub_81074A0(int a1)
{
  signed int v1; // r2@1
  _WORD *v2; // r0@1
  int v4; // [sp+0h] [bp-4h]@0

  v1 = 7;
  v2 = (_WORD *)(16 * ((unsigned int)(a1 << 24) >> 25) + 33647118);
  do
  {
    *v2 = 0;
    --v2;
    --v1;
  }
  while ( v1 >= 0 );
  return v4;
}
