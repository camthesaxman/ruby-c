int sub_80A7150()
{
  int v0; // r0@3
  int v2; // [sp+8h] [bp-4h]@0

  while ( 1 )
  {
    v0 = (unsigned __int8)sub_80A317C();
    if ( v0 == 1 )
      break;
    if ( (unsigned __int8)sub_80F9344(v0) == 1 )
      return v2;
  }
  v2038563 = CreateTask((int)sub_80A7230, 0);
  HIWORD(dword_3004B20[10 * v2038563 + 9]) = 0;
  return v2;
}
