int __fastcall sub_81166E8(unsigned __int8 a1)
{
  int v1; // r6@1
  int *v2; // r4@1
  int v3; // r5@1
  __int16 v4; // r0@3
  int v6; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  v2 = &dword_3004B20[10 * a1];
  v3 = *((_WORD *)v2 + 11);
  if ( *((_WORD *)v2 + 11) )
  {
    if ( v3 == 3 )
    {
      m4aSongNumStop(21);
      v4 = 0;
    }
    else
    {
      v4 = *((_WORD *)v2 + 11) + 1;
    }
  }
  else
  {
    ++*((_WORD *)v2 + 17);
    m4aSongNumStart(21);
    sub_81180F4(*((_WORD *)v2 + 17));
    if ( (signed int)*((_WORD *)v2 + 17) > 9998 )
    {
      *((_WORD *)v2 + 5) = v3;
      goto _0811674A;
    }
    --*((_WORD *)v2 + 5);
    v4 = *((_WORD *)v2 + 11) + 1;
  }
  *((_WORD *)v2 + 11) = v4;
_0811674A:
  if ( !HIWORD(dword_3004B20[10 * v1 + 2]) )
    sub_8116C34(v1, sub_81167F4, 0xFFFF, 3);
  return v6;
}
