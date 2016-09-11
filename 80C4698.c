int __fastcall sub_80C4698(_BYTE *a1, unsigned __int8 a2)
{
  int v2; // r5@1
  int v3; // r4@1
  char v4; // r0@3
  int v6; // [sp+8h] [bp-4h]@0

  v2 = (int)a1;
  v3 = a2;
  StringCopy(a1, (_BYTE *)((a2 << 6) + 33785202));
  if ( v203869A & 1 && *((_WORD *)&gLinkPlayers + 14 * v3 + 13) == 1 )
  {
    v4 = sub_80C86A0(v2);
    ConvertInternationalString(v2, v4);
  }
  return v6;
}
