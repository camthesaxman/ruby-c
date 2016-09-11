int __fastcall sub_804AE3C(int a1, int a2, int a3)
{
  unsigned int j; // r6@4
  __int16 v4; // r5@5
  int v5; // r2@5
  signed __int16 v6; // r0@5
  unsigned int i; // r6@7
  __int16 v8; // r5@8
  int v9; // r2@8
  signed __int16 v10; // r0@8
  char v11; // r0@8
  int v13; // [sp+10h] [bp-4h]@0

  a1 = (unsigned __int8)a1;
  if ( (_BYTE)a1 )
  {
    if ( a1 == 1 )
    {
      for ( i = 0; i < *(_BYTE *)(dword_3004824 + 67); i = (i + 1) & 0xFFFF )
      {
        v8 = GetMonData((int)&unk_30045C0 + 100 * i, 57, a3);
        v10 = GetMonData((int)&unk_30045C0 + 100 * i, 58, v9);
        v11 = sub_8046200(v8, v10);
        *(_BYTE *)(dword_3004824 + 111 + i) = v11;
      }
    }
  }
  else
  {
    for ( j = 0; j < *(_BYTE *)(dword_3004824 + 66); j = (j + 1) & 0xFFFF )
    {
      v4 = GetMonData((int)&dword_3004360[25 * j], 57, a3);
      v6 = GetMonData((int)&dword_3004360[25 * j], 58, v5);
      *(_BYTE *)(dword_3004824 + 105 + j) = sub_8046200(v4, v6);
    }
  }
  return v13;
}
