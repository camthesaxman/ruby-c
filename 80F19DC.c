int __fastcall sub_80F19DC(int a1)
{
  int i; // r1@1
  int v2; // r0@3
  int v4; // [sp+0h] [bp-4h]@0

  for ( i = a1; ; ++i )
  {
    v2 = *(_BYTE *)i;
    if ( v2 == 255 )
      break;
    if ( v2 == 252 && !*(_BYTE *)(i + 1) )
    {
      *(_BYTE *)i = -1;
      return v4;
    }
  }
  return v4;
}
