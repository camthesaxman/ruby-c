int sub_80A5D04()
{
  int v0; // r0@1
  int v2; // [sp+0h] [bp-4h]@0

  while ( 1 )
  {
    v0 = (unsigned __int8)sub_80A317C();
    if ( v0 == 1 )
      break;
    if ( (unsigned __int8)sub_80F9344(v0) == 1 )
      return v2;
  }
  v2038563 = CreateTask((int)sub_80A50C8, 0);
  return v2;
}
