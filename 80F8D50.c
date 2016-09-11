int sub_80F8D50()
{
  int v0; // r0@1
  int v2; // [sp+0h] [bp-4h]@0

  while ( 1 )
  {
    v0 = (unsigned __int8)sub_80F8A28();
    if ( v0 == 1 )
      break;
    if ( (unsigned __int8)sub_80F9344(v0) == 1 )
      return v2;
  }
  SetMainCallback2((int)sub_80F8F2C);
  return v2;
}
