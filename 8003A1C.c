int __fastcall GetGlyphTilePointers(unsigned __int8 a1, char a2, unsigned __int16 a3, int *a4, _DWORD *a5)
{
  int *v5; // r5@1
  int v6; // r3@1
  signed int v7; // r0@2
  char *v8; // r3@4
  int v9; // r0@6
  int v10; // r1@6
  int v11; // r4@7
  const char *v12; // r2@7
  int v13; // r1@13
  int v15; // [sp+Ch] [bp-4h]@0

  v5 = a4;
  v6 = a1;
  if ( a2 == 1 )
    v7 = 0;
  else
    v7 = 7;
  v8 = (char *)&sFonts + 12 * (v7 + v6);
  if ( *(_DWORD *)v8 <= 4u )
  {
    switch ( *(_DWORD *)v8 )
    {
      case 0:
        v9 = *((_DWORD *)v8 + 1) + a3 * *((_WORD *)v8 + 4);
        *v5 = v9;
        v10 = *((_WORD *)v8 + 5);
        goto LABEL_12;
      case 1:
        v11 = 2 * a3 & 0xFFFF;
        v12 = "ÔÔÔ1Ô2Ô3Ô4Ô5Ô6Ô7Ô8Ô9Ô:Ô;Ô<Ô=Ô>Ô?Ô@ÔAÔBÔCÔDÔEÔFÔGÔHÔIÔJÔKÔLÔMÔNÔOÔPÔQÔRÔSÔTÔUÔVÔWÔXÔYÔZÔ[Ô\\Ô]Ô^Ô1Ô2Ô3Ô4Ô5Ô"
              "`ÔaÔbe6e7e8e9e:e;e<e=e>e?e@eAeBeCeDeJeKeLeMeNdJdKdLdMdNÔ_Ô";
        goto LABEL_10;
      case 2:
        *v5 = *((_DWORD *)v8 + 1) + 212 * *((_WORD *)v8 + 4);
        v10 = a3 * *((_WORD *)v8 + 4);
        goto LABEL_11;
      case 3:
        v11 = 2 * a3 & 0xFFFF;
        v12 = sFontType3Map;
LABEL_10:
        *v5 = *((_DWORD *)v8 + 1) + v12[v11] * *((_WORD *)v8 + 4);
        v10 = v12[v11 + 1] * *((_WORD *)v8 + 4);
LABEL_11:
        v9 = *((_DWORD *)v8 + 1);
LABEL_12:
        *a5 = v9 + v10;
        break;
      case 4:
        v13 = *((_DWORD *)v8 + 1) + (a3 & 0xFFF0) * *((_WORD *)v8 + 4) + ((a3 & 0xF) * *((_WORD *)v8 + 4) >> 1);
        *v5 = v13;
        *a5 = v13 + *((_WORD *)v8 + 5);
        break;
      default:
        return v15;
    }
  }
  return v15;
}
