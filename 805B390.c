int __fastcall AddPseudoFieldObject(unsigned __int8 a1, int a2, __int16 a3, __int16 a4)
{
  __int16 v4; // r6@1
  __int16 v5; // r5@1
  int v6; // r5@3
  unsigned __int16 v8; // [sp+0h] [bp-2Ch]@1
  int v9; // [sp+18h] [bp-14h]@1

  v4 = a3;
  v5 = a4;
  MakeObjectTemplateFromFieldObjectGraphicsInfo(a1, a2, (int)&v8, &v9);
  if ( *(&v8 + 1) != 0xFFFF )
    sub_805BDF8(*(&v8 + 1));
  v6 = (unsigned __int8)CreateSprite((int)&v8, v4, v5);
  if ( v6 != 64 && v9 )
  {
    SetSubspriteTables((int)&gSprites[68 * v6], v9);
    gSprites[68 * v6 + 66] = gSprites[68 * v6 + 66] & 0x3F | 0x80;
  }
  return v6;
}
