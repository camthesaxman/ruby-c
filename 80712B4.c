int __fastcall sub_80712B4(unsigned __int8 a1)
{
  int v1; // r4@1
  int *v2; // r2@1
  int v4; // [sp+4h] [bp-4h]@0

  v1 = a1;
  v2 = &dword_3004B20[10 * a1];
  if ( *((_WORD *)v2 + 4) )
  {
    if ( *((_WORD *)v2 + 4) == 1 && (unsigned __int8)call_via_r0(dword_3004AE8) == 1 )
      DestroyTask(v1);
  }
  else
  {
    dword_3004AE8 = (int)sub_8071338;
    ++*((_WORD *)v2 + 4);
  }
  return v4;
}
