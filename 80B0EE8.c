int __fastcall unref_sub_80B0EE8(int a1, int a2)
{
  int v2; // r7@1
  int v3; // r4@1
  int v4; // r0@1
  int v5; // r3@2
  int v6; // r5@2
  int v7; // r0@3
  int v8; // r2@4
  int v10; // [sp+10h] [bp-4h]@0

  v2 = a1;
  v3 = 0;
  v4 = a2 - 1;
  if ( a2 - 1 > 0 )
  {
    do
    {
      v5 = v4;
      v6 = v3 + 1;
      if ( v4 > v3 )
      {
        v7 = 4 * v4 - 4 + v2;
        do
        {
          v8 = *(_DWORD *)(v7 + 4);
          if ( *(_DWORD *)v7 > v8 )
          {
            *(_DWORD *)(v7 + 4) = *(_DWORD *)v7;
            *(_DWORD *)v7 = v8;
          }
          v7 -= 4;
          --v5;
        }
        while ( v5 > v3 );
      }
      ++v3;
      v4 = a2 - 1;
    }
    while ( v6 < a2 - 1 );
  }
  return v10;
}
