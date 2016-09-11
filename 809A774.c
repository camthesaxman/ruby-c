int __fastcall sub_809A774(char a1)
{
  unsigned int v1; // r2@1
  int v2; // r1@2
  int v3; // r0@4
  signed __int16 v4; // r2@4
  int v6; // [sp+10h] [bp-4h]@0

  v1 = 0;
  do
  {
    v2 = 4 * v1 + 33557760;
    *(_WORD *)(*(_DWORD *)v2 + 36) = 0;
    *(_WORD *)(*(_DWORD *)v2 + 46) = 2;
    v1 = (v1 + 1) & 0xFFFF;
  }
  while ( v1 <= 1 );
  if ( a1 & 0x80 )
  {
    *(_WORD *)(v2000D00 + 48) = 29;
    *(_WORD *)(v2000D04 + 48) = 5;
    v3 = v2000D00;
    v4 = 72;
  }
  else
  {
    *(_WORD *)(v2000D00 + 48) = 5;
    *(_WORD *)(v2000D04 + 48) = 29;
    v3 = v2000D00;
    v4 = 248;
  }
  *(_WORD *)(v3 + 50) = v4;
  *(_WORD *)(v2000D04 + 50) = v4;
  *(_WORD *)(v2000D00 + 60) = 0;
  *(_WORD *)(v2000D04 + 60) = 1;
  return v6;
}
