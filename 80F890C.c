int __fastcall sub_80F890C(int a1, int a2, char a3)
{
  int v3; // r4@1
  int v4; // r6@1
  char v5; // r5@1
  int v6; // r0@6
  char *v7; // r1@6
  char *v8; // r2@12
  char v9; // r0@12
  int v11; // [sp+0h] [bp-14h]@8
  int v12; // [sp+10h] [bp-4h]@15

  v3 = a1;
  v4 = a2;
  v5 = a3;
  v20000FF = 2;
  v2000100 = 1;
  v2000104 = sub_80EB3FC;
  v2000108 = ConvertEasyChatWordsToString;
  if ( ((*(_WORD *)(a1 + 32) - 121) & 0xFFFFu) > 0xB )
  {
    v20000FA = 0;
    v5 = 0;
  }
  else
  {
    v20000FA = *(_WORD *)(a1 + 32) - 121;
  }
  if ( v2000100 && v2000100 == 1 )
  {
    v6 = 8 * v20000FA;
    v7 = (char *)&gUnknown_083E57A4;
  }
  else
  {
    v6 = 8 * v20000FA;
    v7 = (char *)&gUnknown_083E5730;
  }
  v200010C = &v7[v6];
  if ( (unsigned int)((sub_80A2D64(*(_WORD *)(v3 + 30), &v11) << 16) - 0x10000) > 0x19A0000 )
    goto _080F89FA;
  if ( v20000FA == 6 )
  {
    v8 = (char *)33554683;
    v9 = 1;
  }
  else
  {
    if ( v20000FA != 9 )
    {
_080F89FA:
      v8 = (char *)33554683;
      v9 = 0;
      goto _080F8A00;
    }
    v8 = (char *)33554683;
    v9 = 2;
  }
_080F8A00:
  *v8 = v9;
  v20000F4 = v3;
  v20000EC = v4;
  v20000F8 = v5;
  SetMainCallback2((int)sub_80F8D50);
  return v12;
}
