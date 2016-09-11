int __fastcall sub_80AC284(unsigned __int8 a1)
{
  int *v1; // r2@1
  __int16 v2; // r0@1
  int v4; // [sp+0h] [bp-4h]@0

  v1 = &dword_3004B20[10 * a1];
  v2 = *((_WORD *)v1 + 4) + 1;
  *((_WORD *)v1 + 4) = v2;
  if ( v2 > 19 )
  {
    v2019214 = 0;
    v201921C = dword_3004818;
    *((_WORD *)v1 + 4) = 0;
    *v1 = (int)sub_80AC2CC;
  }
  return v4;
}
