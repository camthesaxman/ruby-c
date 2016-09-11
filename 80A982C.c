int sub_80A982C()
{
  int v0; // r2@1
  unsigned int v1; // r3@2
  unsigned __int16 v2; // r7@2
  _WORD *v3; // r5@3
  int *v4; // r4@3
  int v5; // r2@5
  int v7; // [sp+10h] [bp-4h]@0

  v0 = 0;
  do
  {
    v1 = (v0 + 1) & 0xFFFF;
    v2 = v0 + 1;
    if ( v1 <= 0x31 )
    {
      v3 = (_WORD *)(4 * v0 + 33709004);
      v4 = (int *)(4 * v0 + 33709004);
      do
      {
        if ( !*v3 )
        {
          v5 = *v4;
          *v4 = *(_DWORD *)(4 * v1 + 0x2025BCC);
          *(_DWORD *)(4 * v1 + 0x2025BCC) = v5;
        }
        v1 = (v1 + 1) & 0xFFFF;
      }
      while ( v1 <= 0x31 );
    }
    v0 = v2;
  }
  while ( v2 <= 0x30u );
  return v7;
}
