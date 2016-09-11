int __fastcall sub_804E884(unsigned __int8 a1)
{
  signed int v1; // r1@1
  char *v2; // r0@2
  _BYTE *v3; // r4@12
  _BYTE *v4; // r1@12
  int v6; // [sp+8h] [bp-4h]@0

  v1 = a1;
  if ( a1 )
  {
    v2 = (char *)&unk_30029C4;
    do
    {
      *((_WORD *)v2 + 13) = 2;
      v2 -= 28;
    }
    while ( (signed int)v2 >= (signed int)&gLinkPlayers );
  }
  if ( v1 == 1 )
  {
    byte_3004834 = 1;
    *(_BYTE *)(dword_3004854 + 136) = 2;
    StringCopy(&unk_3002978, (_BYTE *)0x2024EA4);
    v3 = &unk_3002994;
    v4 = (_BYTE *)&UnknownText_Mister;
_0804E920:
    StringCopy(v3, v4);
    return v6;
  }
  if ( v1 <= 1 )
  {
    if ( !v1 )
      byte_3004834 = 0;
    return v6;
  }
  if ( v1 == 2 )
  {
    byte_3004834 = 2;
    *(_BYTE *)(dword_3004854 + 136) = 3;
    StringCopy(&unk_3002978, (_BYTE *)0x2024EA4);
    StringCopy(&unk_3002994, &UnknownText_Mister);
    v3 = &unk_30029B0;
    v4 = (_BYTE *)&UnknownText_Laddie;
    goto _0804E920;
  }
  if ( v1 == 3 )
  {
    byte_3004834 = 3;
    *(_BYTE *)(dword_3004854 + 136) = 4;
    StringCopy(&unk_3002978, (_BYTE *)0x2024EA4);
    StringCopy(&unk_3002994, &UnknownText_Mister);
    StringCopy(&unk_30029B0, &UnknownText_Laddie);
    StringCopy(&unk_30029CC, &UnknownText_Lassie);
  }
  return v6;
}
