int __fastcall unref_sub_805BE24(_WORD *a1)
{
  _WORD *v1; // r5@1
  int v2; // r4@1
  int v4; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  v2 = 0;
  if ( *a1 != 4607 )
  {
    do
    {
      sub_805BDF8(v1[v2]);
      v2 = (v2 + 1) & 0xFF;
    }
    while ( v1[v2] != 4607 );
  }
  return v4;
}
