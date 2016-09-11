int __fastcall TintPlttBuffer(unsigned int a1, char a2, char a3, char a4)
{
  unsigned int v4; // r4@1
  int v5; // r9@1
  unsigned int v6; // r4@3
  int v7; // r2@4
  char v9; // [sp+0h] [bp-30h]@1
  unsigned int v10; // [sp+Ch] [bp-24h]@2
  int v11; // [sp+2Ch] [bp-4h]@0

  v4 = a1;
  v9 = a3;
  v5 = 0;
  if ( a1 )
  {
    do
    {
      v10 = v4 >> 1;
      if ( v4 & 1 )
      {
        v6 = 0;
        do
        {
          v7 = 2 * (v5 + v6) + 33746632;
          *(_BYTE *)v7 = *(_BYTE *)v7 & 0xE0 | ((*(_BYTE *)v7 & 0x1F) + a2) & 0x1F;
          *(_WORD *)v7 = *(_WORD *)v7 & 0xFC1F | 32 * (((*(_DWORD *)v7 << 22 >> 27) + v9) & 0x1F);
          *(_BYTE *)(v7 + 1) = *(_BYTE *)(v7 + 1) & 0x83 | 4 * (((*(_DWORD *)v7 << 17 >> 27) + a4) & 0x1F);
          v6 = (v6 + 1) & 0xFF;
        }
        while ( v6 <= 0xF );
      }
      v4 = v10;
      v5 = (unsigned __int16)(v5 + 16);
    }
    while ( v10 );
  }
  return v11;
}
