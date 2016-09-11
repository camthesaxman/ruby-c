_BOOL4 __fastcall sub_8056B60(int a1, int a2, int a3)
{
  int v3; // r4@1
  int v4; // r5@1
  int v5; // r6@1
  int **v6; // r1@1
  signed int v7; // r0@1
  _BOOL4 result; // r0@3

  v3 = a1;
  v4 = a2;
  v5 = a3;
  v6 = (int **)mapconnection_get_mapheader(a1);
  v7 = *(_BYTE *)v3;
  if ( v7 < 1 )
    goto LABEL_9;
  if ( v7 <= 2 )
    return sub_8056B4C(v4 - *(_DWORD *)(v3 + 4), **v6);
  if ( v7 > 4 )
LABEL_9:
    result = 0;
  else
    result = sub_8056B4C(v5 - *(_DWORD *)(v3 + 4), (*v6)[1]);
  return result;
}
