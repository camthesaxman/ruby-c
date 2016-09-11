int __fastcall AddDecorationIconObjectFromFieldObject(int a1, unsigned __int8 a2)
{
  int v2; // r5@1
  int v3; // r4@1
  char *v4; // r4@1
  char *v5; // r2@2
  char *v6; // r3@3
  int v8; // [sp+10h] [bp-4h]@0

  v2 = a1;
  v3 = a2;
  sub_80FEF74();
  sub_80FED1C();
  sub_81006D0(v2);
  v4 = (char *)&gDecorations + 32 * v3;
  *(_DWORD *)v2 = v4;
  if ( v4[17] == 4 )
  {
    v20391A8 = *(_WORD *)&gSprites[68 * dword_3004884 + 46];
    v6 = (char *)&gUnknown_083EC900 + 4 * (unsigned __int8)v4[18];
    LOBYTE(dword_3004884) = AddPseudoFieldObject(
                              **((_WORD **)v4 + 7),
                              (int)sub_81009A8,
                              (unsigned __int8)v6[2],
                              (unsigned __int8)v6[3]);
    dword_3004884 = (unsigned __int8)dword_3004884;
    gSprites[68 * dword_3004884 + 5] = gSprites[68 * dword_3004884 + 5] & 0xF3 | 4;
  }
  else
  {
    sub_81008BC(v2);
    sub_8100930(*(_BYTE *)(*(_DWORD *)v2 + 18));
    sub_8100874(v2);
    sub_810070C(
      v2 + 2180,
      (unsigned int)*(_WORD *)(16 * **(_WORD **)(*(_DWORD *)v2 + 28) + *(_DWORD *)(*(_DWORD *)(v202E828 + 20) + 12) + 14) >> 12);
    LoadSpritePalette((int)&gUnknown_083EC954);
    v20391A8 = *(_WORD *)&gSprites[68 * dword_3004884 + 46];
    v5 = (char *)&gUnknown_083EC900 + 4 * *(_BYTE *)(*(_DWORD *)v2 + 18);
    dword_3004884 = CreateSprite((int)&gSpriteTemplate_83EC93C, (unsigned __int8)v5[2], (unsigned __int8)v5[3]) & 0xFF;
  }
  return v8;
}
