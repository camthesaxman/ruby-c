int __fastcall sub_80AD960(unsigned __int8 a1)
{
  int *v1; // r5@1
  signed int v2; // r0@1
  int v3; // r0@9
  unsigned __int8 v4; // r0@10
  int v5; // r0@10
  int v6; // r0@11
  int v8; // [sp+Ch] [bp-4h]@0

  v1 = &dword_3004B20[10 * a1];
  v2 = *((_WORD *)v1 + 4);
  if ( v2 == 1 )
  {
    if ( v201920B & 4 )
      return v8;
    goto _080AD9FE;
  }
  if ( v2 <= 1 )
  {
    if ( *((_WORD *)v1 + 4) )
      return v8;
    if ( v203869A & 1 )
    {
      v201920B |= 4u;
      if ( sub_80AE074() << 24 )
      {
        v3 = sub_80AF2FC();
        sub_80AF3C0(v3);
      }
      v4 = CreateTask((int)sub_80C8C80, 0);
      v5 = SetTaskFuncWithFollowupFunc(v4, (int)sub_80C8C80, (int)sub_80AD8DC);
      sub_80AF860(v5);
      *((_WORD *)v1 + 4) = 1;
      return v8;
    }
    v6 = sub_80AF2FC();
    sub_80AF3C0(v6);
_080AD9FE:
    *((_WORD *)v1 + 4) = 2;
    return v8;
  }
  if ( v2 == 2 )
  {
    *((_WORD *)v1 + 4) = 0;
    *v1 = (int)sub_80ADA1C;
  }
  return v8;
}
