int sub_80EB7C4()
{
  _WORD *v0; // r5@8
  int v1; // r2@8
  unsigned __int16 v2; // r3@10
  int v4; // [sp+8h] [bp-4h]@0

  if ( v202E8CC != 1 )
  {
    if ( (signed int)v202E8CC <= 1 )
    {
      if ( v202E8CC )
        return v4;
      v0 = (_WORD *)33718864;
      v1 = 2;
      goto _080EB81C;
    }
    if ( v202E8CC == 2 )
    {
      v0 = (_WORD *)33718888;
    }
    else
    {
      if ( v202E8CC != 3 )
        return v4;
      v0 = (_WORD *)33718900;
    }
_080EB81A:
    v1 = 3;
_080EB81C:
    v2 = 2;
    goto _080EB81E;
  }
  v0 = (_WORD *)33718876;
  if ( !(sub_80EB680() << 24) )
    goto _080EB81A;
  v1 = 2;
  v2 = 3;
_080EB81E:
  ConvertEasyChatWordsToString(&gStringVar4, v0, v1, v2);
  box_related_two__3((int)&gStringVar4);
  return v4;
}
