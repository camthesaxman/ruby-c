int __fastcall sub_804ACF4(int a1, int a2, int a3)
{
  int v3; // r8@1
  signed int v4; // r7@4
  int v5; // r5@5
  int v6; // r1@6
  int v7; // r2@6
  _BYTE *v8; // r0@7
  int v9; // r0@8
  signed int v10; // r7@13
  signed int v11; // r5@14
  int v12; // r2@14
  int v13; // r1@15
  int v14; // r2@15
  _BYTE *v15; // r0@16
  int v16; // r0@17
  int v18; // [sp+18h] [bp-4h]@0

  a1 = (unsigned __int8)a1;
  v3 = a1;
  if ( (_BYTE)a1 )
  {
    if ( a1 == 1 )
    {
      v10 = 0;
      if ( (signed int)*(_BYTE *)(dword_3004824 + 67) > 0 )
      {
        v11 = 6;
        v12 = 0;
        do
        {
          v13 = GetMonData((int)&unk_30045C0 + 100 * v10, 45, v12);
          if ( v13 == 1 )
          {
            v12 = 0;
            *(_BYTE *)(dword_3004824 + 81 + v11) = 0;
            v15 = (_BYTE *)(dword_3004824 + 93 + v11);
          }
          else
          {
            v16 = GetMonData((int)&unk_30045C0 + 100 * v10, 57, v14);
            LOBYTE(v13) = v16;
            if ( v16 )
            {
              *(_BYTE *)(dword_3004824 + 81 + v11) = 1;
              v15 = (_BYTE *)(dword_3004824 + 93 + v11);
              LOBYTE(v13) = 0;
            }
            else
            {
              *(_BYTE *)(dword_3004824 + 81 + v11) = 0;
              v15 = (_BYTE *)(dword_3004824 + 93 + v11);
            }
          }
          *v15 = v13;
          ++v11;
          ++v10;
        }
        while ( v10 < *(_BYTE *)(dword_3004824 + 66 + v3) );
      }
    }
  }
  else
  {
    v4 = 0;
    if ( (signed int)*(_BYTE *)(dword_3004824 + 66) > 0 )
    {
      v5 = 0;
      do
      {
        v6 = GetMonData((int)&dword_3004360[25 * v4], 45, a3);
        if ( v6 == 1 )
        {
          a3 = 0;
          *(_BYTE *)(dword_3004824 + 81 + v5) = 0;
          v8 = (_BYTE *)(dword_3004824 + 93 + v5);
        }
        else
        {
          v9 = GetMonData((int)&dword_3004360[25 * v4], 57, v7);
          LOBYTE(v6) = v9;
          if ( v9 )
          {
            *(_BYTE *)(dword_3004824 + 81 + v5) = 1;
            v8 = (_BYTE *)(dword_3004824 + 93 + v5);
            LOBYTE(v6) = 0;
          }
          else
          {
            *(_BYTE *)(dword_3004824 + 81 + v5) = 0;
            v8 = (_BYTE *)(dword_3004824 + 93 + v5);
          }
        }
        *v8 = v6;
        ++v5;
        ++v4;
      }
      while ( v4 < *(_BYTE *)(dword_3004824 + 66 + v3) );
    }
  }
  return v18;
}
