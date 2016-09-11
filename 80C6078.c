int sub_80C6078()
{
  int v0; // r2@1
  signed __int16 v1; // r0@3
  int v3; // [sp+4h] [bp-4h]@0

  v0 = *(_WORD *)(v20387EC + 12);
  if ( v4000006 <= 80 - v0 || v4000006 >= v0 + 80 )
    v1 = 16;
  else
    v1 = 0;
  v4000054 = v1;
  return v3;
}
