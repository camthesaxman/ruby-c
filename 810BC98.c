int sub_810BC98()
{
  int v0; // r2@1
  unsigned int v1; // r5@2
  unsigned __int16 v2; // r8@2
  _BYTE *v3; // r7@3
  int v4; // r6@3
  int v5; // r3@5
  int v6; // r4@5
  int v7; // r2@5
  int v8; // r1@5
  int v10; // [sp+18h] [bp-4h]@0

  v0 = 0;
  do
  {
    v1 = (v0 + 1) & 0xFFFF;
    v2 = v0 + 1;
    if ( v1 <= 0x27 )
    {
      v3 = (_BYTE *)(8 * v0 + 33709868);
      v4 = 8 * v0 + 33709868;
      do
      {
        if ( !*v3 )
        {
          v5 = *(_DWORD *)v4;
          v6 = *(_DWORD *)(v4 + 4);
          v7 = 8 * v1 + 33709868;
          v8 = *(_DWORD *)(8 * v1 + 0x2025F30);
          *(_DWORD *)v4 = *(_DWORD *)(8 * v1 + 0x2025F2C);
          *(_DWORD *)(v4 + 4) = v8;
          *(_DWORD *)v7 = v5;
          *(_DWORD *)(v7 + 4) = v6;
        }
        v1 = (v1 + 1) & 0xFFFF;
      }
      while ( v1 <= 0x27 );
    }
    v0 = v2;
  }
  while ( v2 <= 0x26u );
  return v10;
}
