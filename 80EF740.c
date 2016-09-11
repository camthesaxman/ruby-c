int sub_80EF740()
{
  int v0; // r0@1
  int v2; // [sp+0h] [bp-4h]@0

  v0 = (v2006DA0 + 1) & 1;
  v2006DA0 = (v2006DA0 + 1) & 1;
  if ( v0 )
    ++v2006DA2;
  v400001C = v2006DA2;
  return v2;
}
