int __fastcall sub_809FAC8(int a1, int a2, int a3)
{
  int v3; // r5@1
  int v4; // r6@3
  int v5; // r2@3
  unsigned __int16 v6; // r0@3
  int v7; // r4@3
  int v8; // r0@5
  signed int v9; // r1@5
  int v10; // r0@9
  int v11; // r0@9
  int v13; // [sp+18h] [bp-4h]@0

  v3 = a1;
  if ( GetMonData(a1, 45, a3) )
  {
    MenuZeroFillWindowRect(1u, 2u, 4u, 3u);
    MenuZeroFillWindowRect(3u, 0x10u, 9u, 0x11u);
    MenuZeroFillWindowRect(0, 0xCu, 0xBu, 0xFu);
    GetMonNickname(v3, (int)&gStringVar1);
    sub_80A1FF8(&gStringVar1, 13, 3, 16);
    LoadPalette((int)&gUnknown_083C157C, 4, 2);
  }
  else
  {
    v4 = (unsigned __int8)sub_809FA94(v3);
    v6 = GetMonData(v3, 11, v5);
    v7 = (unsigned __int16)sub_80406D8(v6);
    if ( v7 == 0xFFFF )
    {
      MenuZeroFillWindowRect(1u, 2u, 4u, 3u);
    }
    else
    {
      if ( v4 )
      {
        GetStringCenterAlignXOffsetWithLetterSpacing(2, 8, 1, 2);
        v8 = v7;
        v9 = 8;
      }
      else
      {
        GetStringCenterAlignXOffset(2u, 1u, 2u);
        v8 = v7;
        v9 = 13;
      }
      sub_80A1F98(v8, v9, 3, 2);
    }
    v10 = sub_80A1E58(&gStringVar1, 13);
    v11 = GetMonNickname(v3, v10);
    *(_BYTE *)v11 = -4;
    *(_BYTE *)(v11 + 1) = 19;
    *(_BYTE *)(v11 + 2) = 60;
    *(_BYTE *)(v11 + 3) = -1;
    MenuPrint((int)&gStringVar1, 1, 0xCu);
    sub_80A0958(v3);
  }
  return v13;
}
