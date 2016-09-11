int __fastcall sub_804A51C(unsigned __int8 a1, unsigned __int8 a2, unsigned __int8 a3, unsigned __int8 a4, unsigned __int8 a5, unsigned __int8 a6)
{
  int v6; // r8@1
  int v7; // r9@1
  int v8; // r10@1
  unsigned int v9; // r6@2
  int v10; // r7@2
  int v11; // r5@4
  unsigned int v12; // r4@5
  int v13; // r2@5
  int v14; // r5@7
  _WORD *v15; // r1@9
  __int16 v16; // r0@9
  int v17; // r3@13
  char v19; // [sp+Ch] [bp-3Ch]@2
  int v20; // [sp+24h] [bp-24h]@1
  int v21; // [sp+44h] [bp-4h]@15

  v6 = a1;
  v7 = a2;
  v8 = a3;
  v20 = a4;
  sub_804A96C(dword_3004824 + 200, a5, a6, &gTradeMonBoxTilemap);
  if ( v6 )
  {
    v9 = (unsigned __int8)GetMonData((int)&unk_30045C0 + 100 * v7, 56, 0);
    v10 = (unsigned __int8)GetMonGender();
    GetMonData((int)&unk_30045C0 + 100 * v7, 2, (int)&v19);
  }
  else
  {
    v9 = (unsigned __int8)GetMonData((int)&dword_3004360[25 * v7], 56, 0);
    v10 = (unsigned __int8)GetMonGender();
    GetMonData((int)&dword_3004360[25 * v7], 2, (int)&v19);
  }
  v11 = dword_3004824;
  if ( *(_BYTE *)(dword_3004824 + 93 + 6 * v6 + v7) )
  {
    v17 = v8 + 32 * v20;
    *(_WORD *)(dword_3004824 + 218 + 2 * (v8 + 32 * v20 - 32)) = *(_WORD *)(dword_3004824
                                                                          + 218
                                                                          + 2 * (v8 + 32 * v20 - 33));
    v15 = (_WORD *)(v11 + 218 + 2 * (v17 - 31));
    v16 = *(_WORD *)(v11 + 218 + 2 * (v17 - 36)) | 0x400;
    goto _0804A6CA;
  }
  v12 = v9 / 0xA & 0xFF;
  v13 = 32 * v20;
  if ( v12 )
    *(_WORD *)(dword_3004824 + 218 + 2 * (v8 + v13)) = (unsigned __int8)(v9 / 0xA) + 96;
  v14 = v8 + v13;
  *(_WORD *)(dword_3004824 + 218 + 2 * (v8 + v13 + 1)) = v9 % 0xA + 112;
  if ( v10 )
  {
    if ( v10 == 254 && !(sub_8042548(&v19, 0xFEu) << 24) )
    {
      v15 = (_WORD *)(dword_3004824 + 218 + 2 * (v14 - 31));
      v16 = *v15 + 2;
      goto _0804A6CA;
    }
  }
  else if ( !(sub_8042548(&v19, 0) << 24) )
  {
    v15 = (_WORD *)(dword_3004824 + 218 + 2 * (v14 - 31));
    v16 = *v15 + 1;
_0804A6CA:
    *v15 = v16;
    return v21;
  }
  return v21;
}
